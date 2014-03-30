//
//  PlayingCard.h
//  flip_card
//
//  Created by gyuwon on 3/31/14.
//  Copyright (c) 2014 gyuwon. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;
@end
