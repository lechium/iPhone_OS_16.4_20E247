//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/FCTag.h>

@class NSArray;

@interface _TtCZFE8NewsFeedV13TeaFoundation6Random7channelFT4withSS_PSo18FCChannelProviding_L_9RandomTag : FCTag
{
}

- (id)init;	// IMP=0x0000000000dc9360
- (id)initChannelFromNotificationWithIdentifier:(id)arg1 name:(id)arg2 nameImageAssetHandle:(id)arg3 nameImageMaskAssetHandle:(id)arg4;	// IMP=0x0000000000dc9290
- (id)initWithTagType:(unsigned long long)arg1 identifier:(id)arg2 name:(id)arg3;	// IMP=0x0000000000dc9190
- (id)initWithTagMetadata:(id)arg1 assetManager:(id)arg2 isSports:(_Bool)arg3;	// IMP=0x0000000000dc9060
- (id)initWithData:(id)arg1 context:(id)arg2;	// IMP=0x0000000000dc8f70
- (id)initChannelForTestingWithIdentifier:(id)arg1 name:(id)arg2 publisherPaidBundlePurchaseIDs:(id)arg3;	// IMP=0x0000000000dc8e90
- (id)initChannelForTestingWithIdentifier:(id)arg1 name:(id)arg2 defaultSection:(id)arg3 publisherAuthorizationURL:(id)arg4 publisherVerificationURL:(id)arg5;	// IMP=0x0000000000dc8c50
- (id)initForTestingWithTagType:(unsigned long long)arg1 identifier:(id)arg2 name:(id)arg3 umcCanonicalID:(id)arg4;	// IMP=0x0000000000dc8a20
- (id)initForTestingWithTagType:(unsigned long long)arg1 identifier:(id)arg2 name:(id)arg3;	// IMP=0x0000000000dc88f0
- (id)initWithTagRecord:(id)arg1 assetManager:(id)arg2 interestToken:(id)arg3;	// IMP=0x0000000000dc8880
@property(nonatomic, readonly) NSArray *currentIssueIDs;

@end
