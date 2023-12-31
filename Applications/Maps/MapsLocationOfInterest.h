//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapItem, NSString, NSUUID;

@interface MapsLocationOfInterest : NSObject
{
    long long _type;	// 8 = 0x8
    NSUUID *_identifier;	// 16 = 0x10
    NSString *_customLabel;	// 24 = 0x18
    MKMapItem *_mapItem;	// 32 = 0x20
    NSString *_originalName;	// 40 = 0x28
}

+ (void)fetchLocationOfInterestWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0040000000779538
- (void).cxx_destruct;	// IMP=0x0020000000779a74
@property(readonly, nonatomic) NSString *originalName; // @synthesize originalName=_originalName;
@property(readonly, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(retain, nonatomic) NSString *customLabel; // @synthesize customLabel=_customLabel;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)description;	// IMP=0x0010000000779932
@property(readonly, nonatomic) _Bool isFrequentLocation;
@property(readonly, nonatomic) NSString *name;
- (void)_updateMapItemWithGeoMapItem:(id)arg1;	// IMP=0x0010000000779159
- (void)_updateMapItemName;	// IMP=0x0010000000779109
- (id)initWithMapsSuggestionEntry:(id)arg1;	// IMP=0x0010000000778f7c
- (id)initWithLocationOfInterest:(id)arg1 geoMapItem:(id)arg2;	// IMP=0x0010000000778e92
- (id)initWithLocationOfInterestType:(long long)arg1 mapItem:(id)arg2;	// IMP=0x0010000000778df6
- (id)init;	// IMP=0x0010000000778de8

@end

