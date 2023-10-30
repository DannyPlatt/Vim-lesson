#include <stdio.h>
// from this point on, you will not use arrowKeys, nor your mouse
//
//                      k
//                  h       l 
//                      j
//
// lesson topics:
//  0. Config: 
//      type: <:set relativenumber>
//             <:set number>
//             <:set colorscheme slate>
//
//  1. modes: insert, normal, visual, command
//     command, count, motion
//  2. hjkl, w, b 
//      a. u, ctrl_r
//      b. quit, and save
//  3. insert mode i, a, I,A, o,O, (left side of curser, right side)
//  4. delete, d, dd, d3k d2w ,x(delete is a command)
//  5. visual mode: <v>, or <V> y, p,P, yanking and
//     deleteing go to same buffer
//
//  bonus: changing windows: <ctrl_w> enters window settings
//         use motions to navigate h,j,k,l
//         :split - split screen horizontally
//         :vsplit - split screen vertically

int main() {
    //hello();
    //deletion()
    //visual();
    return 0;
}

void hello(){
    //in this function, type HELLO WORLD using insert mode
    //type <i> to enter insert mode
    // <esc> or <ctrl_c> key will return to normal mode
    
    // use <i> to enter insert mode and type Hello world
    printf("hello world\n"); 
    //anser the following question, and end the line with a ";"
    printf("3 + 4 =")
}
void deletion(){
    // here we work on deleting in normal mode
    // use <d> as a command, and a motion <w> or <b> to delete
    // in that direction
    // <x> deletes char under curser, use sparingly
    printf("⊂(this ◉‿doesn't ◉)belong つ");
    printf("ʕノfix •ᴥthis •ʔand ノ ︵make   ┻it ━whole ┻");
    printf("ʕ key_bっ• usingᴥ backwards•ʔ moveっ"); // use db, start here

    Delete this whole line use <dd>
    combine use command <d>, count <4>, motion <j>
    to
    delete
    these words
}

void visual(){
    // at last we arrive at copy and pasting
    // use <v> to enter visual mode
    printf("ԅ(≖‿≖ԅ)\n");// highlight this, and yank with <y>

    printf("ԅ(≖‿≖ԅ)\n");// copy this entire line with <yy>/paste with <p>
    // paste below <p>

    paste over top of this text


    // pop quiz memory check
    printf("delete this and write something!\
            oh, and add a semicolon on the end \n")
    delete this whole line in normal mode
    highlight this line and delete it using visual mode
}

// ##########################
// ### RESOURCES ############
// place curser in link, type <gx>
//
// basic keys poster
// https://www.ssp.sh/blog/why-using-neovim-data-engineer-and-writer-2023/vim-language-cheetsheet.png
// 
// the Primogen. great way to go over what was taught here
// and move onto the next motions
// https://www.youtube.com/watch?v=X6AR2RMB5tE&list=PLm323Lc7iSW_wuxqmKx_xxNtJC_hJbQ7R
//
// For vim's built in lesson, use command
// :Tutor
//
// for reference docs and basic help, use
// :help 
// :help quickref
//
// once inside, use <ctrl_]> to traverse the tags/links
// use <ctrl_o> to go back a page
//
// ##### DELETION ##### 
// to delete this write protected file from your computer, go back to the command line
// step back one directory (folder)
// ensure Vim-lesson is with your current folder
// type:
//      "rm Vim-lesson -r -f" and hit <enter>
