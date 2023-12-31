//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICConnectionConfiguration, NSDate, NSNumber, NSString;

@interface ICCloudContentTasteUpdateItem : NSObject
{
    long long _storeID;	// 8 = 0x8
    ICConnectionConfiguration *_configuration;	// 16 = 0x10
    long long _contentTasteType;	// 24 = 0x18
    long long _contentTasteItem;	// 32 = 0x20
    NSString *_globalPlaylistID;	// 40 = 0x28
    NSDate *_updateActionTimeStamp;	// 48 = 0x30
    NSNumber *_dsid;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000a10de
- (void).cxx_destruct;	// IMP=0x00200000000a10a0
@property(retain, nonatomic) NSNumber *dsid; // @synthesize dsid=_dsid;
@property(retain, nonatomic) NSDate *updateActionTimeStamp; // @synthesize updateActionTimeStamp=_updateActionTimeStamp;
@property(retain, nonatomic) NSString *globalPlaylistID; // @synthesize globalPlaylistID=_globalPlaylistID;
@property(nonatomic) long long contentTasteItem; // @synthesize contentTasteItem=_contentTasteItem;
@property(nonatomic) long long contentTasteType; // @synthesize contentTasteType=_contentTasteType;
@property(retain, nonatomic) ICConnectionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) long long storeID; // @synthesize storeID=_storeID;
- (unsigned long long)hash;	// IMP=0x001000000009de58
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000009dd52
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000009dc7c
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000009daf0
- (id)description;	// IMP=0x001000000009d9fe
- (id)initWithGlobalPlaylistID:(id)arg1 contentTaste:(long long)arg2 configuration:(id)arg3;	// IMP=0x001000000009d8b3
- (id)initWithStoreItemID:(long long)arg1 mediaContentTasteItem:(long long)arg2 contentTaste:(long long)arg3 configuration:(id)arg4 timeStamp:(id)arg5;	// IMP=0x001000000009d780

@end

