program project1;

// https://freetype.org/freetype2/docs/tutorial/step1.html
// https://chromium.googlesource.com/chromium/src/third_party/freetype2/+/VER-2-BETA2/include/fterrors.h

// https://freetype.org/freetype2/docs/tutorial/example2.cpp


//{$linklib freetype.so}
// {$linklib /usr/local/lib/x86_64-linux-gnu/libfreetype.so.6.20.1}
{$linklib libfreetype.so}


uses
  crt,
  ctypes,
  freetype,
  ftimage,
  fttypes;

const
  Width = 320;
  Height = 160;

  procedure draw_bitmap(bitmap: PFT_Bitmap; x: TFT_Int; y: TFT_Int);
  var
    x_max, y_max, i,j,p,q: TFT_Int;
    ch: cuchar;
  begin
    x_max:=x+bitmap^.width;
    y_max:=y+bitmap^.rows;

//    WriteLn('x: ', x_max,'  y: ',y_max);
    WriteLn('x: ', bitmap^.width,'  y: ',bitmap^.rows);

    i:=x;
    p:=0;
    while (i<x_max) do begin
      Inc(i);
      Inc(p);

      j:=y;
      q:=0;
      while (j<y_max) do begin
        Inc(j);
        Inc(q);

        ch:=bitmap^.buffer[q*bitmap^.width+p];
    //    GotoXY(j,i);
//        Write(ch,' - ');


    end;
    end;

  end;

  procedure main;
  const
    fileName = '/usr/share/fonts/truetype/freefont/FreeMono.ttf';
//    fileName2 = '/usr/share/wine/fonts/courier.ttf';
    Text :PChar= 'Hello World';
  var
    library_: TFT_Library;
    face: TFT_Face;
    slot: TFT_GlyphSlot;

    pen: TFT_Vector;
    matrix: TFT_Matrix;

    error: TFT_Error;

    angle: double;
    target_height, n: integer;

  begin
    angle := ( 120.0 / 360 ) * 3.14159 * 2;
    target_height := Height;

    error := FT_Init_FreeType(@library_);
    if error <> 0 then begin
      WriteLn('Fehler: ', error);
    end;

    error := FT_New_Face(library_, fileName, 0, @face);
    if error <> 0 then begin
      WriteLn('Fehler: ', error);
    end;

    //  error := FT_Set_Char_Size(face, 50 * 64,0,100,0);
    error := FT_Set_Char_Size(face, 50 * 15, 0, 100, 0);
    if error <> 0 then begin
      WriteLn('Fehler: Set_Char_Size   ', error);
    end;

    slot := face^.glyph;



    matrix.xx := Round(Cos(angle) * 10000);
    matrix.xy := Round(-Sin(angle) * 10000);
    matrix.yx := Round(Sin(angle) * 10000);
    matrix.yy := Round(Cos(angle) * 10000);

    pen.x := 200 * 64;
    pen.y := (target_height - 200) * 64;

    WriteLn('angle:', angle:10:4);
    WriteLn('size: matrix: ', SizeOf(matrix));
    WriteLn('size: pen:    ', SizeOf(pen));
    WriteLn('pen.x:    ', pen.x);
    WriteLn('pen.y:    ', pen.y);
    WriteLn('matrix.xx:    ', matrix.xx);
    WriteLn('matrix.xy:    ', matrix.xy);
    WriteLn('matrix.yx:    ', matrix.yx);
    WriteLn('matrix.yy:    ', matrix.yy);

    for n := 0 to Length(Text) - 1 do begin
      FT_Set_Transform(face, @matrix, @pen);

      error := FT_Load_Char(face, TFT_ULong(Text[n]), FT_LOAD_RENDER);
      if error <> 0 then begin
        WriteLn('Fehler: Load_Char   ', error);
      end;

      Write('n: ',n,'   ');
      draw_bitmap(@slot^.bitmap, slot^.bitmap_left, target_height - slot^.bitmap_top);

      pen.x+=slot^.advance.x;
      pen.y+=slot^.advance.y;
    end;

    FT_Done_Face(face);
    FT_Done_FreeType(library_);
  end;


begin
  main;

end.
