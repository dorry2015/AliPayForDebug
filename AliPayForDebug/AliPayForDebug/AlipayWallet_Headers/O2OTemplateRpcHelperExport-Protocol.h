//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSExport-Protocol.h"

@class JSValue, NSDictionary, NSString, VZMistPageWeakWrapper;

@protocol O2OTemplateRpcHelperExport <JSExport>
+ (id)rpcHelper:(VZMistPageWeakWrapper *)arg1;
@property(retain, nonatomic) NSString *jsCacheKey;
@property(nonatomic) _Bool jsUseCache;
@property(retain, nonatomic) NSDictionary *jsDataParams;
@property(retain, nonatomic) NSString *jsMethodName;
- (void)loadMore;
- (void)reload;
- (void)load:(JSValue *)arg1;
@end

