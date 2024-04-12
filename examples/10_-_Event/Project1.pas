program Project1;

// https://github.com/Ravbug/sdl3-sample/blob/main/src/main.cpp

uses
  ctypes,
  SDL3;

var
  window: PSDL_Window;
  bitmapSurface: PSDL_Surface;
  dstrect: TSDL_Rect = (x: 100; y: 100; w: 200; h: 200);
  renderer: PSDL_Renderer;
  Width, Height, bbwidth, bbheight: longint;

  procedure SDLFail(const err: string);
  begin
    SDL_LogError(SDL_LOG_CATEGORY_CUSTOM, PChar('Fehler: ' + err));
    Halt(1);
  end;

procedure SwitchMouseButton;
var
  IsEnabled: TSDL_bool;

  // https://wiki.libsdl.org/SDL3/SDL_SetEventEnabled
begin
  WriteLn(SDL_FALSE);
  WriteLn(SDL_TRUE);
  WriteLn(not SDL_FALSE);
  WriteLn(not SDL_TRUE);
  WriteLn();
  WriteLn(Integer( True));
  WriteLn(Integer( False));
  WriteLn(Integer(not True));
  WriteLn(Integer(not False));
  WriteLn(#10);

  IsEnabled :=  SDL_EventEnabled(SDL_EVENT_MOUSE_BUTTON_DOWN);
  WriteLn(IsEnabled);
//  IsEnabled :=SDL_IsEventEnabled;
IsEnabled:=not IsEnabled;
  IsEnabled:=IsEnabled and 1;
  WriteLn('IsEnabled: ',IsEnabled);

  SDL_SetEventEnabled(SDL_EVENT_MOUSE_BUTTON_DOWN,IsEnabled);
  end;

  procedure Run;
  var
    event: TSDL_Event;
    quit: boolean = False;
    time: single;
    red, green, blue: byte;
    keyStat: PUInt8;
    cnt: integer = 0;
  begin

    while not quit do begin
      keyStat := SDL_GetKeyboardState(nil);
      if keyStat[SDL_SCANCODE_SPACE] <> 0 then begin
        SDL_Log('Space is pressed   %i',cnt);
        inc( cnt);
      end;
      if keyStat[SDL_SCANCODE_LEFT] <> 0 then begin
        SDL_Log('Left is pressed   %i',cnt);
        inc( cnt);
      end;

      while SDL_PollEvent(@event) <> 0 do begin
        case event.type_ of
          SDL_EVENT_KEY_DOWN: begin
            SDL_Log('key: %i', event.key.keysym.sym); // neu

            case event.key.keysym.sym of
              SDLK_ESCAPE: begin
                quit := True;
              end;
              SDLK_m: begin
                SwitchMouseButton;
              end;

            end;
          end;
          SDL_EVENT_MOUSE_BUTTON_DOWN:SDL_Log('Mouse down');
          SDL_EVENT_MOUSE_BUTTON_UP:SDL_Log('Mouse up');
          SDL_EVENT_QUIT: begin
            quit := True;
          end;
        end;
      end;


      time := SDL_GetTicks / 1000;
      red := Trunc((SDL_sinf(time) + 1) / 2.0 * 255);
      green := Trunc((SDL_sinf(time / 2) + 1) / 2.0 * 255);
      blue := Trunc((SDL_sinf(time / 3) + 1) / 2.0 * 255);

      SDL_SetRenderDrawColor(renderer, red, green, blue, SDL_ALPHA_OPAQUE);

      SDL_RenderClear(renderer);
      SDL_RenderPresent(renderer);
    end;
  end;

begin
  SDL_init(SDL_INIT_VIDEO);

  window := SDL_CreateWindow('SDL3 Window', 320, 200, SDL_WINDOW_RESIZABLE);
  if window = nil then begin
    SDLFail('Kann kein SDL-Fenster erzeugen !');
  end;
  renderer := SDL_CreateRenderer(window, nil, SDL_RENDERER_ACCELERATED);
//  renderer := SDL_CreateRenderer(window, nil, SDL_RENDERER_PRESENTVSYNC);
  if renderer = nil then begin
    SDLFail('Kann kein SDL-Renderer erzeugen !');
  end;

  SDL_ShowWindow(window);

  SDL_GetWindowSize(window, @Width, @Height);
  SDL_GetWindowSizeInPixels(window, @bbwidth, @bbheight);
  SDL_LogCritical(0, 'Window size: %ix%i', bbwidth, bbheight);
  SDL_LogCritical(0, 'blabla');
  SDL_Log('Window size: %ix%i', bbwidth, bbheight);
  SDL_Log('log');
  SDL_LogWarn(0, 'warn');
  WriteLn('Window size: ', bbwidth, 'x', bbheight);

  if Width <> bbwidth then  begin
    SDL_Log('This is a highdpi environment.');
  end;

  Run;

  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);

  SDL_Quit;
  SDL_Log('Application quit successfully!');
end.
