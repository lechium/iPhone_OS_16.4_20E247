//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCAssetHandle, FRSectionData, MISSING_TYPE, NSData, NSString;

@interface FRReferredArticle : NSObject
{
    NSString *_articleID;	// 8 = 0x8
    FRSectionData *_sectionData;	// 16 = 0x10
    NSString *_sourceChannelID;	// 24 = 0x18
    FCAssetHandle *_flintDocumentAssetHandle;	// 32 = 0x20
    NSData *_articleRecordData;	// 40 = 0x28
    NSData *_sourceChannelRecordData;	// 48 = 0x30
    MISSING_TYPE *_parentIssueRecordData;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000d14c2
@property(readonly, nonatomic) NSData *parentIssueRecordData; // @synthesize parentIssueRecordData=_parentIssueRecordData;
@property(readonly, nonatomic) NSData *sourceChannelRecordData; // @synthesize sourceChannelRecordData=_sourceChannelRecordData;
@property(readonly, nonatomic) NSData *articleRecordData; // @synthesize articleRecordData=_articleRecordData;
@property(readonly, nonatomic) FCAssetHandle *flintDocumentAssetHandle; // @synthesize flintDocumentAssetHandle=_flintDocumentAssetHandle;
@property(readonly, nonatomic) NSString *sourceChannelID; // @synthesize sourceChannelID=_sourceChannelID;
@property(readonly, nonatomic) FRSectionData *sectionData; // @synthesize sectionData=_sectionData;
@property(readonly, copy, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
- (id)headlineWithContentContext:(id)arg1;	// IMP=0x00100000000d1129
- (id)initWithArticleID:(id)arg1 sourceChannelID:(id)arg2 sectionData:(id)arg3 flintDocumentAssetHandle:(id)arg4 articleRecordData:(id)arg5 sourceChannelRecordData:(id)arg6 parentIssueRecordData:(id)arg7;	// IMP=0x00100000000d0ec5

@end

