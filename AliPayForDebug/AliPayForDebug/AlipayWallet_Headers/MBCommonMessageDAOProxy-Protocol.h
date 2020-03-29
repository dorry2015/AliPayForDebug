//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDAOProtocol-Protocol.h"

@class APDAOResult, MBCommonMessageEntity, NSArray, NSNumber, NSString;

@protocol MBCommonMessageDAOProxy <APDAOProtocol>
- (NSArray *)query_all_templateIds;
- (NSArray *)query_last_messages_with_templateCodes:(NSArray *)arg1;
- (NSNumber *)get_message_count_with_not_in_templateCodes:(NSArray *)arg1;
- (NSNumber *)get_message_count_with_templateCodes:(NSArray *)arg1;
- (NSArray *)get_message_list_with_templateCodes:(NSArray *)arg1 time:(NSNumber *)arg2 limit:(NSNumber *)arg3;
- (MBCommonMessageEntity *)query_last_message_templateCode_gmtCreate:(NSString *)arg1 gmtCreate:(NSNumber *)arg2;
- (NSNumber *)query_unread_message_count_with_templateCodes:(NSArray *)arg1;
- (NSNumber *)query_all_message_count;
- (APDAOResult *)delete_messages_with_templateCode_belowGmtCreate:(NSString *)arg1 belowGmtCreate:(NSNumber *)arg2;
- (APDAOResult *)delete_message_not_in_templateCodes_and_limit:(NSArray *)arg1 limit:(NSNumber *)arg2;
- (APDAOResult *)clear_message_with_gmtCreate:(NSNumber *)arg1;
- (APDAOResult *)clear_message_with_templateCodes:(NSArray *)arg1;
- (APDAOResult *)delete_message:(NSString *)arg1 msgId:(NSString *)arg2;
- (APDAOResult *)set_all_message_read;
- (APDAOResult *)set_all_message_read_with_templateCodes:(NSArray *)arg1;
- (APDAOResult *)insert_message:(MBCommonMessageEntity *)arg1;
- (APDAOResult *)save_message:(MBCommonMessageEntity *)arg1;
@end
