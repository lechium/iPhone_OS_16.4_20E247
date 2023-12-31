//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecord, CKReference, NSDictionary, NSNumber, NSString, WBSCRDTPosition;

@interface CloudTab : NSObject
{
    CKRecord *_record;	// 8 = 0x8
}

+ (id)_valueTransformerForTitleAndURL;	// IMP=0x002000000008f394
+ (id)cloudTabWithTabUUIDString:(id)arg1 owningDeviceUUIDString:(id)arg2 owningSceneID:(id)arg3 position:(id)arg4 title:(id)arg5 urlString:(id)arg6 isPinned:(_Bool)arg7 isShowingReader:(_Bool)arg8 readerScrollPositionPageIndex:(id)arg9 encodedSystemFieldsData:(id)arg10 cloudTabsRecordZoneID:(id)arg11;	// IMP=0x001000000008dd56
+ (id)cloudTabWithCKRecord:(id)arg1;	// IMP=0x001000000008dcb8
+ (id)cloudTabWithWBSCloudTabDictionaryRepresentation:(id)arg1 owningDeviceUUIDString:(id)arg2 position:(id)arg3 cloudTabsRecordZoneID:(id)arg4;	// IMP=0x001000000008da15
- (void).cxx_destruct;	// IMP=0x002000000008f4ae
@property(readonly, nonatomic) CKRecord *record; // @synthesize record=_record;
- (id)_positionAfterPosition:(id)arg1;	// IMP=0x001000000008f412
@property(readonly, copy, nonatomic) NSDictionary *wbsCloudTabDictionaryRepresentation;
@property(readonly, nonatomic) NSNumber *readerScrollPositionPageIndex;
@property(readonly, copy, nonatomic) NSDictionary *readerScrollPositionDictionary;
- (_Bool)isShowingReader;	// IMP=0x001000000008efed
@property(readonly, nonatomic, getter=isPinned) _Bool pinned;
@property(readonly, copy, nonatomic) WBSCRDTPosition *position;
@property(readonly, copy, nonatomic) NSString *urlString;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *owningSceneID;
@property(readonly, nonatomic) CKReference *owningDevice;
@property(readonly, copy, nonatomic) NSString *owningDeviceUUIDString;
@property(readonly, copy, nonatomic) NSString *tabUUIDString;
- (id)description;	// IMP=0x001000000008eae3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000008eaaa
- (void)positionTabAfterPosition:(id)arg1;	// IMP=0x001000000008e949
- (void)updateFromCloudTab:(id)arg1 previousTabPosition:(id)arg2;	// IMP=0x001000000008e592
- (void)_commonInitWithTabUUIDString:(id)arg1 owningDeviceUUIDString:(id)arg2 owningSceneID:(id)arg3 position:(id)arg4 title:(id)arg5 urlString:(id)arg6 isPinned:(_Bool)arg7 isShowingReader:(_Bool)arg8 readerScrollPositionPageIndex:(id)arg9 encodedSystemFieldsData:(id)arg10 cloudTabsRecordZoneID:(id)arg11;	// IMP=0x001000000008e0af
- (id)_initWithCKRecord:(id)arg1;	// IMP=0x001000000008e025
- (id)_initWithTabUUIDString:(id)arg1 owningDeviceUUIDString:(id)arg2 owningSceneID:(id)arg3 position:(id)arg4 title:(id)arg5 urlString:(id)arg6 isPinned:(_Bool)arg7 isShowingReader:(_Bool)arg8 readerScrollPositionPageIndex:(id)arg9 encodedSystemFieldsData:(id)arg10 cloudTabsRecordZoneID:(id)arg11;	// IMP=0x001000000008dece
- (id)init;	// IMP=0x001000000008dec0

@end

