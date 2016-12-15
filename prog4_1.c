#include <stdio.h>
#include <string.h>
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>

int main (int argc, char *argv[]) {
	char buffer [256]
	int error;

lua_State *L= luaL_newstate();	/*opens lua*/
luaL_openslibs(L)

lua_State *L =luaL_newstate();		/*This opens lua*/
luaL_openslibs(L);

 	luaL_dofile(L,argv[1]);

while (fgets(buffer,sizeof(buffer), stdin != NULL){
	error= luaL_loadbuffer(L,buffnstrlen(buff), ";INE") ||
	lua_pcall(L,0,0,0);
if (error){
fprintf (stderr, "%s", lua_tostring(L,-1));
lua_pop(L,1);
	}
}


           lua_close(L);
       return 0;
     }


