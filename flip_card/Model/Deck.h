//
//  Deck.h
//  flip_card
//
//  Created by gyuwon on 3/31/14.
//  Copyright (c) 2014 gyuwon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"
@interface Deck : NSObject
- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;
@end
