//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CCUpdate, NSArray, NSDictionary, NSString;

@protocol CCUpdateDelegate <NSObject>

@optional
- (NSString *)updateDispatchCondition:(CCUpdate *)arg1;
- (NSArray *)updateBoardDataList:(CCUpdate *)arg1;
- (void)updateManager:(CCUpdate *)arg1 loadIndexPaths:(NSArray *)arg2 param:(NSDictionary *)arg3;
- (void)updateManager:(CCUpdate *)arg1 finishUpdateIndexPaths:(NSArray *)arg2 param:(NSDictionary *)arg3;
- (void)updateManager:(CCUpdate *)arg1 updatingCard:(id)arg2 group:(id)arg3 param:(NSDictionary *)arg4;
@end

