//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GO2OServiceObject.h"

@class NSString;

@interface GO2OSearchTipResponse : GO2OServiceObject
{
    _Bool _success;
    NSString *_query;
    NSString *_showText;
    NSString *_jumpUrl;
    NSString *_scm;
}

@property(copy, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(copy, nonatomic) NSString *showText; // @synthesize showText=_showText;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;

@end

