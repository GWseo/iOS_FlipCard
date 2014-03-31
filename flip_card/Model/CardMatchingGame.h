//
//  CardMatchingGame.h
//  flip_card
//
//  Created by gyuwon on 3/31/14.
//  Copyright (c) 2014 gyuwon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Deck.h"
#import "Card.h"

@interface CardMatchingGame : NSObject
// designated initializer
-(instancetype)initWithCardCount:(NSUInteger)count usingDeck:(Deck *)deck;

-(void)chooseCardAtIndex:(NSUInteger)index;
-(Card *)cardAtIndex:(NSUInteger)index;

@property (nonatomic, readonly) NSInteger score;
@end
