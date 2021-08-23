# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    script_correction.sh                               :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmorel <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/05 12:54:51 by rmorel            #+#    #+#              #
#    Updated: 2021/08/05 17:44:42 by rmorel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

echo 'Quel module? '
read module_nb

cp -Rv /sgoinfre/goinfre/Perso/rmorel/$module_nb/* ~/goinfre/$module_nb/

echo 'Done'
