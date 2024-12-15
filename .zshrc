export https_proxy=http://127.0.0.1:7897 http_proxy=http://127.0.0.1:7897 all_proxy=socks5://127.0.0.1:7897
export PATH="/opt/homebrew/bin:$PATH"
eval "$(oh-my-posh init zsh --config /opt/homebrew/opt/oh-my-posh/themes/M365Princess.omp.json)"
HOMEBREW_NO_AUTO_UPDATE=1


export NVM_DIR="$HOME/.nvm"
[ -s "$NVM_DIR/nvm.sh" ] && \. "$NVM_DIR/nvm.sh"  # This loads nvm
[ -s "$NVM_DIR/bash_completion" ] && \. "$NVM_DIR/bash_completion"  # This loads nvm bash_completion
alias vim=nvim
export PATH="/opt/homebrew/opt/mysql-client/bin:$PATH"
export LDFLAGS="-L/opt/homebrew/opt/mysql-client/lib"
export CPPFLAGS="-I/opt/homebrew/opt/mysql-client/include"
alias dk=docker
alias vi=nvim
alias vim=neovide


mkdir(){
    /bin/mkdir "$@" && cd "$@"
}

eval $(thefuck --alias ff)
source $(brew --prefix)/share/zsh-autosuggestions/zsh-autosuggestions.zsh
bindkey '^w' autosuggest-accept
bindkey '^e' autosuggest-execute
source /opt/homebrew/share/zsh-syntax-highlighting/zsh-syntax-highlighting.zsh
alias ran=joshuto
alias ls=function_eza
alias e=exit


function_eza(){
    eza $@ -l -u
}
function_exit(){
    exit
}
