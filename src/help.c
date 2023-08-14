#include "help.h"
#include "game.h"

// 
char * msg_string_inGame(int);
char * msg_string_inLobby(int);

//--------------------------------------------------------
char * helpGetString(int stringId)
{
  if (isInGame())
  {
      return msg_string_inGame(stringId);
  }
  else if (isInMenus())
  {
      return msg_string_inLobby(stringId);
  }

  return NULL;
}
