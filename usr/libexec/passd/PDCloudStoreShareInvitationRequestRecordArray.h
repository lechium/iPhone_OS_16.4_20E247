//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKCloudRecordArray;

@interface PDCloudStoreShareInvitationRequestRecordArray
{
    PKCloudRecordArray *_cloudStoreRecords;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000003438b4
@property(readonly, nonatomic) PKCloudRecordArray *cloudStoreRecords; // @synthesize cloudStoreRecords=_cloudStoreRecords;
- (unsigned long long)type;	// IMP=0x0010000000343898
- (id)initWithCloudStoreRecords:(id)arg1 success:(_Bool)arg2 error:(id)arg3;	// IMP=0x0010000000343816

@end

