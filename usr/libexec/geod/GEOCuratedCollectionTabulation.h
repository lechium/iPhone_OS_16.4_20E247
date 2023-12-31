//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface GEOCuratedCollectionTabulation : NSObject
{
    unsigned long long viewCount;	// 8 = 0x8
    NSUUID *sessionID;	// 16 = 0x10
    double firstViewed;	// 24 = 0x18
    double lastViewed;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000001d62d
@property(nonatomic) double lastViewed; // @synthesize lastViewed;
@property(nonatomic) double firstViewed; // @synthesize firstViewed;
@property(retain, nonatomic) NSUUID *sessionID; // @synthesize sessionID;
@property(nonatomic) unsigned long long viewCount; // @synthesize viewCount;

@end

