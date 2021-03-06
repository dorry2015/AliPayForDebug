//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol TAStorageManagerDelegate;

@interface TASandBox : NSObject
{
    NSString *_appId;
    NSArray *_allStorageKeys;
    unsigned long long _storageSize;
    unsigned long long _itemLimitSize;
    unsigned long long _storageLimitSize;
    id <TAStorageManagerDelegate> _storageManager;
}

@property(retain, nonatomic) id <TAStorageManagerDelegate> storageManager; // @synthesize storageManager=_storageManager;
@property(nonatomic) unsigned long long storageLimitSize; // @synthesize storageLimitSize=_storageLimitSize;
@property(nonatomic) unsigned long long itemLimitSize; // @synthesize itemLimitSize=_itemLimitSize;
@property(nonatomic) unsigned long long storageSize; // @synthesize storageSize=_storageSize;
@property(retain, nonatomic) NSArray *allStorageKeys; // @synthesize allStorageKeys=_allStorageKeys;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (void)notifyStorageChange;
- (_Bool)clearStorage;
- (_Bool)removeObject:(id)arg1;
- (id)objectForKey:(id)arg1;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2 checkSize:(_Bool)arg3;
- (id)initWith:(id)arg1 storageManager:(id)arg2;

@end

