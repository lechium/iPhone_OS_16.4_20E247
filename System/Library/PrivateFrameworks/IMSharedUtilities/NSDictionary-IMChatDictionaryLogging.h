//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@class NSNumber, NSString;

@interface NSDictionary (IMChatDictionaryLogging)
+ (id)dictionaryWithMessageSummaryInfoData:(id)arg1;	// IMP=0x002000000007ea9b
+ (id)dictionaryWithAssociatedMessageSummary:(id)arg1 contentType:(unsigned char)arg2 pluginBundleID:(id)arg3 pluginDisplayName:(id)arg4;	// IMP=0x002000000007e995
- (id)__im_copyChatDictionaryWithRedactedMessageContent;	// IMP=0x0010000000002810
- (id)__immphc_dateForKey:(id)arg1;	// IMP=0x0010000000018a0a
- (id)__immphc_attributedStringForKey:(id)arg1;	// IMP=0x0010000000018942
- (unsigned long long)unsignedLongLongValueForKey:(id)arg1 withDefault:(unsigned long long)arg2;	// IMP=0x001000000002131a
- (long long)longLongValueForKey:(id)arg1 withDefault:(long long)arg2;	// IMP=0x00100000000212cf
- (unsigned long long)unsignedLongValueForKey:(id)arg1 withDefault:(unsigned long long)arg2;	// IMP=0x0010000000021284
- (long long)longValueForKey:(id)arg1 withDefault:(long long)arg2;	// IMP=0x0010000000021239
- (float)floatValueForKey:(id)arg1 withDefault:(float)arg2;	// IMP=0x00100000000211e7
- (double)doubleValueForKey:(id)arg1 withDefault:(double)arg2;	// IMP=0x0010000000021195
- (unsigned long long)unsignedIntegerValueForKey:(id)arg1 withDefault:(unsigned long long)arg2;	// IMP=0x001000000002114a
- (long long)integerValueForKey:(id)arg1 withDefault:(long long)arg2;	// IMP=0x00100000000210ff
- (_Bool)boolValueForKey:(id)arg1 withDefault:(_Bool)arg2;	// IMP=0x00100000000210b4
- (_Bool)isArchivable_im;	// IMP=0x00100000000330ab
- (id)allValuesSortedByGUIDKeyWithBackupOrder:(id)arg1;	// IMP=0x001000000004ac52
@property(readonly, nonatomic) NSString *__im_associatedMessagePluginDisplayName;
@property(readonly, nonatomic) NSString *__im_associatedMessagePluginBundleID;
@property(readonly, nonatomic) NSNumber *__im_associatedMessageContentType;
@property(readonly, nonatomic) NSString *__im_associatedMessageSummary;
@end

