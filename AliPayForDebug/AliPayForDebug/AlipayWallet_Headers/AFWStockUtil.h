//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AFWStockUtil : NSObject
{
}

+ (id)safeJsonValue:(id)arg1;
+ (_Bool)isLuoShuMarketTrend;
+ (id)getFormateChangeRate:(id)arg1 status:(long long)arg2;
+ (id)systemFontOfSize:(double)arg1 weight:(double)arg2;
+ (id)getMarketWithStockCode:(id)arg1;
+ (id)getSymbolWithStockCode:(id)arg1 market:(id)arg2;
+ (_Bool)isCurrentStockAutoRefresh:(id)arg1;
+ (id)sharedManager;
- (void)stockIdByStockCode:(id)arg1 market:(id)arg2;

@end

