//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDAOProtocol-Protocol.h"

@class APDAOResult, CSCard, NSArray;

@protocol CSCardProtocol <APDAOProtocol>
- (APDAOResult *)deleteCards:(NSArray *)arg1;
- (APDAOResult *)deleteAllCards;
- (APDAOResult *)updateCards:(NSArray *)arg1;
- (APDAOResult *)updateCard:(CSCard *)arg1;
- (NSArray *)getCardsWithCardIds:(NSArray *)arg1;
- (NSArray *)getAllCards;
- (APDAOResult *)insertCards:(NSArray *)arg1;
- (APDAOResult *)insertCard:(CSCard *)arg1;
@end
