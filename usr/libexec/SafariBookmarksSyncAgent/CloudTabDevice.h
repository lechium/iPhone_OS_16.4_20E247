//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecord, NSArray, NSDate, NSDictionary, NSString;

@interface CloudTabDevice : NSObject
{
    NSArray *_tabs;	// 8 = 0x8
    CKRecord *_record;	// 16 = 0x10
}

+ (id)_valueTransformerForDeviceName;	// IMP=0x00400000000924ec
+ (id)cloudTabDeviceWithDeviceUUIDString:(id)arg1 deviceName:(id)arg2 hasDuplicateName:(_Bool)arg3 isEphemeralDevice:(_Bool)arg4 lastModified:(id)arg5 encodedSystemFieldsData:(id)arg6 cloudTabsRecordZoneID:(id)arg7;	// IMP=0x0010000000091335
+ (id)cloudTabDeviceWithCKRecord:(id)arg1;	// IMP=0x0010000000091297
+ (id)cloudTabDeviceWithDictionaryRepresentation:(id)arg1 deviceUUIDString:(id)arg2 cloudTabsRecordZoneID:(id)arg3;	// IMP=0x00100000000910f3
- (void).cxx_destruct;	// IMP=0x0020000000092863
@property(readonly, nonatomic) CKRecord *record; // @synthesize record=_record;
@property(copy, nonatomic) NSArray *tabs; // @synthesize tabs=_tabs;
- (void)_setTabsFromWBSCloudTabDictionaryRepresentations:(id)arg1 cloudTabsRecordZoneID:(id)arg2;	// IMP=0x001000000009258b
- (id)_positionAfterPosition:(id)arg1 owningDeviceUUIDString:(id)arg2;	// IMP=0x001000000009256a
@property(readonly, copy, nonatomic) NSDictionary *wbsCloudTabDeviceDictionary;
@property(readonly, nonatomic) NSDate *lastModified;
@property(readonly, nonatomic, getter=isEphemeralDevice) _Bool ephemeralDevice;
@property(readonly, nonatomic) _Bool hasDuplicateName;
@property(readonly, copy, nonatomic) NSString *deviceName;
@property(readonly, copy, nonatomic) NSString *deviceUUIDString;
- (id)description;	// IMP=0x0010000000091f77
- (id)_updateTabsFromCloudTabs:(id)arg1;	// IMP=0x0010000000091a11
- (id)updateFromCloudTabDevice:(id)arg1;	// IMP=0x0010000000091792
- (id)_initWithDeviceUUIDString:(id)arg1 deviceName:(id)arg2 hasDuplicateName:(_Bool)arg3 lastModified:(id)arg4 isEphemeralDevice:(_Bool)arg5 encodedSystemFieldsData:(id)arg6 cloudTabsRecordZoneID:(id)arg7;	// IMP=0x00100000000914bc
- (id)_initWithCKRecord:(id)arg1;	// IMP=0x0010000000091432
- (id)init;	// IMP=0x0010000000091424

@end
