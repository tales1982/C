let extensao = expand('%:e')

call plug#begin('~/.vim/plugged')
" Plugin de Exemplo inicial
Plug 'terroo/vim-simple-emoji'

" Aqui vão os plugins
Plug 'matsuuu/pinkmare'
if( extensao == "cpp" || extensao == "cc" || extensao == "h" || extensao == "hpp" ) 
Plug 'ycm-core/YouCompleteMe'
else
Plug 'zxqfl/tabnine-vim'
endif
Plug 'jiangmiao/auto-pairs'
Plug 'SirVer/ultisnips'
Plug 'honza/vim-snippets'
Plug 'ervandew/supertab'
Plug 'vim-airline/vim-airline'
Plug 'vim-airline/vim-airline-themes'
Plug 'dracula/vim', { 'as': 'dracula' }

call plug#end()

" TEMA DE CORES
colorscheme pinkmare
hi! MatchParen cterm=NONE,bold gui=NONE,bold guibg=NONE guifg=#FFFF00

" CONFIGS RECOMENDADAS
set nu!
set mouse=a
set title
set cursorline

" MAPEAMENTOS LEGAIS
map q :quit<CR>
map <C-s> :w<CR>

" YOUCOMPLETEME
let g:ycm_global_ycm_extra_conf = '~/.vim/.ycm_extra_conf.py'
set completeopt-=preview
let g:ycm_show_diagnostics_ui = 0
let g:ycm_clangd_args=['--header-insertion=never']
let g:ycm_language_server =
  \ [{
  \   'name': 'ccls',
  \   'cmdline': [ 'ccls' ],
  \   'filetypes': [ 'c', 'cpp', 'cc', 'h', 'hpp' ],
  \   'project_root_files': [ '.ccls-root', 'compile_commands.json' ]
  \ }]


" UTILSNIPS
let g:ycm_key_list_select_completion = ['<C-n>', '<Down>']
let g:ycm_key_list_previous_completion = ['<C-p>', '<Up>']
let g:SuperTabDefaultCompletionType = '<C-n>'
let g:UltiSnipsExpandTrigger = "<tab>"
let g:UltiSnipsJumpForwardTrigger = "<tab>"
let g:UltiSnipsJumpBackwardTrigger = "<s-tab>"

" VIM AIRLINE
let g:airline_theme = 'dracula'
" powerline symbols
let g:airline_left_sep = ''
let g:airline_left_alt_sep = ''
let g:airline_right_sep = ''
let g:airline_right_alt_sep = ''
let g:airline_symbols = {}
let g:airline_symbols.branch = ''
let g:airline_symbols.readonly = ''
let g:airline_symbols.linenr = '☰ '
let g:airline_symbols.maxlinenr = '  '
let g:airline_symbols.dirty='⚡'
