//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDAOProtocol-Protocol.h"

@class APDAOResult, NSArray, NSString, UcdpPositionBody;

@protocol UcdpPositionBodyDao <APDAOProtocol>
- (APDAOResult *)deletePositionBodys:(NSArray *)arg1;
- (APDAOResult *)deletePositionBody:(NSString *)arg1;
- (UcdpPositionBody *)getPositionBody:(NSString *)arg1;
- (NSArray *)getAllPositionBodys;
- (APDAOResult *)updateCreativeList:(UcdpPositionBody *)arg1;
- (APDAOResult *)savePositionBodys:(NSArray *)arg1;
- (APDAOResult *)savePositionBody:(UcdpPositionBody *)arg1;
@end

