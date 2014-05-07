//
//  PlayingCard.h
//  Matchismo
//
//  Created by Vitaly Kondratiev on 05/05/2014.
//  Copyright (c) 2014 AppFocused. All rights reserved.
//

@import Foundation;
#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSArray *)rankStrings;
+ (NSUInteger)maxRank;

@end
