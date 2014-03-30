//
//  Card.m
//  flip_card
//
//  Created by gyuwon on 3/31/14.
//  Copyright (c) 2014 gyuwon. All rights reserved.
//

#import "Card.h"

@implementation Card

- (int)match:(NSArray *)otherCards
{
    int score = 0;
    
    for(Card *card in otherCards)  {
        if([card.contents isEqualToString:self.contents]){
            score = 1;
        }
    }
    return score;
}

@end
