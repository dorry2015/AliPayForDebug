//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NXIRLogManager : NSObject
{
}

+ (id)seedId:(unsigned long long)arg1;
+ (id)type:(unsigned long long)arg1 step:(unsigned long long)arg2 error:(id)arg3 data:(id)arg4 cusStep:(id)arg5;
+ (id)shared;
- (void)log:(id)arg1;
- (id)initInPrivate;
- (id)init;

@end
