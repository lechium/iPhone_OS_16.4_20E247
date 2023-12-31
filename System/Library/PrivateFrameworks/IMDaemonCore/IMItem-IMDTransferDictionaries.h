//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMSharedUtilities/IMItem.h>

@interface IMItem (IMDTransferDictionaries)
+ (void)resetSyncStateForMessage:(id)arg1 toState:(long long)arg2;	// IMP=0x0060000000053d88
+ (id)createItemWithCKRecord:(id)arg1;	// IMP=0x0060000000052f62
+ (id)createUpdateT1Info:(id)arg1;	// IMP=0x006000000005290c
+ (id)createCKRecordForUpdateT2:(id)arg1 zoneID:(id)arg2 salt:(id)arg3;	// IMP=0x0060000000052724
+ (id)createCKRecordForUpdateT1:(id)arg1 zoneID:(id)arg2 salt:(id)arg3;	// IMP=0x00600000000524f4
+ (id)populateIMMessageActionItem:(id)arg1 withProtobufData:(id)arg2;	// IMP=0x00600000000521b2
+ (id)messageActionChangeProtobufForCompressedData:(id)arg1;	// IMP=0x006000000005212b
+ (id)populateIMGroupActionItem:(id)arg1 withProtobufData:(id)arg2;	// IMP=0x0060000000051e45
+ (id)groupActionProtobufForCompressedData:(id)arg1;	// IMP=0x0060000000051dbe
+ (id)populateIMLocationShareStatusChangeItem:(id)arg1 withProtobufData:(id)arg2;	// IMP=0x0060000000051a66
+ (id)locationShareStatusChangeProtobufForCompressedData:(id)arg1;	// IMP=0x00600000000519df
+ (id)populateIMParticipantChangeItem:(id)arg1 withProtobufData:(id)arg2;	// IMP=0x00600000000516f9
+ (id)participantChangeProtobufForCompressedData:(id)arg1;	// IMP=0x0060000000051672
+ (id)populateIMGroupTitleChangeItem:(id)arg1 withProtobufData:(id)arg2;	// IMP=0x006000000005136a
+ (id)groupTitleChangeProtobufForCompressedData:(id)arg1;	// IMP=0x00600000000512e3
+ (id)populateIMMessageItemWithProtobufFields:(id)arg1 withProtobufDataP3:(id)arg2;	// IMP=0x0060000000050d78
+ (id)populateIMMessageItemWithProtobufFields:(id)arg1 withProtobufDataP2:(id)arg2;	// IMP=0x0060000000050cca
+ (id)populateIMMessageItemWithProtobufFields:(id)arg1 withProtobufData:(id)arg2;	// IMP=0x006000000005090f
+ (id)protobufForUpdateT2:(id)arg1;	// IMP=0x0060000000050888
+ (id)protobufForUpdateT1:(id)arg1;	// IMP=0x0060000000050801
+ (id)protobufForCompressedDataP3:(id)arg1;	// IMP=0x006000000005077a
+ (id)protobufForCompressedDataP2:(id)arg1;	// IMP=0x00600000000506f3
+ (id)protobufForCompressedData:(id)arg1;	// IMP=0x006000000005066c
+ (id)compressedProtobufDataForUpdateT2:(id)arg1;	// IMP=0x0060000000050582
+ (id)compressedProtobufDataForUpdateT1:(id)arg1;	// IMP=0x006000000005045b
+ (id)compressedProtobufDataWithPadding:(id)arg1;	// IMP=0x006000000004fd3e
+ (id)_updateV1RecordType;	// IMP=0x006000000004fd18
- (id)copyFileTransferDictionaryRepresentationsFromCenter:(id)arg1;	// IMP=0x00100000000291a5
- (_Bool)isCompatibleWithMiC;	// IMP=0x0010000000054abd
- (_Bool)shouldStoreMessage;	// IMP=0x0010000000054036
- (_Bool)_shouldDownloadIfPhoneNumberAndNoSIM:(id)arg1;	// IMP=0x0010000000053f38
- (id)copyCKRecordRepresentationWithZoneID:(id)arg1 salt:(id)arg2;	// IMP=0x0010000000052b3b
- (id)_recordFromServerChangeToken;	// IMP=0x0010000000052a6e
- (_Bool)callerIDShouldBeCheckedForRegistration:(id)arg1;	// IMP=0x00100000000526dc
- (void)_populateCKRecordWithIMMessageActionItemFields:(id)arg1;	// IMP=0x0010000000052415
- (id)compressedProtobufDataForMessageActionItem;	// IMP=0x00100000000522ab
- (void)_populateCKRecordWithIMGroupActionItemFields:(id)arg1;	// IMP=0x001000000005204c
- (id)compressedProtobufDataForGroupActionItem;	// IMP=0x0010000000051f10
- (void)_populateCKRecordWithIMLocationShareStatusChangeItemFields:(id)arg1;	// IMP=0x0010000000051cdf
- (id)compressedProtobufDataForLocationShareStatusChangeItem;	// IMP=0x0010000000051b86
- (void)_populateCKRecordWithIMParticipantChangeItemFields:(id)arg1;	// IMP=0x0010000000051900
- (id)compressedProtobufDataForParticipantChangeItem;	// IMP=0x00100000000517c4
- (void)_populateCKRecordWithIMGroupTitleChangeItemFields:(id)arg1;	// IMP=0x0010000000051593
- (id)compressedProtobufDataForGroupTitleChangeItem;	// IMP=0x0010000000051446
- (void)_populateCKRecordWithIMMessageItemFields:(id)arg1;	// IMP=0x001000000005107e
- (void)_populateCKRecordWithIMItemFields:(id)arg1;	// IMP=0x0010000000050e30
- (id)compressedProtobufDataForMessageP3;	// IMP=0x0010000000050349
- (id)compressedProtobufDataForMessageP2;	// IMP=0x0010000000050234
- (id)compressedProtobufDataForMessage;	// IMP=0x001000000004fe2a
- (id)_accountControllerSharedInstance;	// IMP=0x001000000004fd25
- (id)_recordType;	// IMP=0x001000000004fd0b
@end

