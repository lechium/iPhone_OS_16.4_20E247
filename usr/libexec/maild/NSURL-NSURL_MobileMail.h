//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (NSURL_MobileMail)
+ (id)mf_fileURLInTempAppendingTimestampedPathComponent:(id)arg1 withExtension:(id)arg2;	// IMP=0x00200000000cf832
+ (id)mf_URLForMessageLibraryID:(id)arg1 externalID:(id)arg2;	// IMP=0x00100000000cf62a
- (id)mf_URLByAppendingTimestampedPathComponent:(id)arg1 withExtension:(id)arg2;	// IMP=0x00200000000d0091
- (id)mf_conversationCriterion;	// IMP=0x00100000000cff7d
- (id)mf_messageCriterion;	// IMP=0x00100000000cfc31
- (_Bool)mf_isOAuthRedirectURL;	// IMP=0x00100000000cfb2a
- (_Bool)mf_isDocumentURL;	// IMP=0x00100000000cfa86
@property(readonly, nonatomic) _Bool mf_isInternallyHandleable;
@end
