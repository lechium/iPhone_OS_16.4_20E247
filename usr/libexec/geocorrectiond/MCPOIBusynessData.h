//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocation, CLVisit;

@interface MCPOIBusynessData : NSObject
{
    _Bool _written;	// 8 = 0x8
    CLLocation *_leechedLocation;	// 16 = 0x10
    CLVisit *_visit;	// 24 = 0x18
    double _uploadedTimestamp;	// 32 = 0x20
}

+ (id)readLastFromDisk:(id *)arg1;	// IMP=0x0020000000001b8e
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000001a2e
+ (id)cacheFileURL;	// IMP=0x0010000000001760
- (void).cxx_destruct;	// IMP=0x0020000000002500
@property(readonly, nonatomic) double uploadedTimestamp; // @synthesize uploadedTimestamp=_uploadedTimestamp;
@property(readonly, nonatomic) CLVisit *visit; // @synthesize visit=_visit;
@property(readonly, nonatomic) CLLocation *leechedLocation; // @synthesize leechedLocation=_leechedLocation;
- (id)description;	// IMP=0x001000000000243f
- (CDStruct_c3b9c2ee)leechedGEOCoordinate2D;	// IMP=0x00100000000023fb
- (id)leechedGEOLocation;	// IMP=0x00100000000022d8
- (void)writeToDisk;	// IMP=0x001000000000200f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000001b1a
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000001a36
- (id)initWithLocation:(id)arg1 visit:(id)arg2;	// IMP=0x0010000000001995

@end

