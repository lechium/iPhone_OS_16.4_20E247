//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKServerChangeToken, PKCloudStoreZone;

@interface PDCloudStoreTokenRecordFetchCloudStoreZoneAndChangeToken : NSObject
{
    PKCloudStoreZone *_cloudStoreZone;	// 8 = 0x8
    CKServerChangeToken *_changeToken;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001d0b75
@property(retain, nonatomic) CKServerChangeToken *changeToken; // @synthesize changeToken=_changeToken;
@property(retain, nonatomic) PKCloudStoreZone *cloudStoreZone; // @synthesize cloudStoreZone=_cloudStoreZone;
- (id)description;	// IMP=0x00100000001d0aa6
- (id)initWithCloudStoreZone:(id)arg1 changeToken:(id)arg2;	// IMP=0x00100000001d0a0d
- (id)initWithCloudStoreZone:(id)arg1;	// IMP=0x00100000001d09f9

@end
