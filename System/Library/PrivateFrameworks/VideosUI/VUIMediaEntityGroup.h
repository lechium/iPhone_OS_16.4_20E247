//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol NSCopying;

__attribute__((visibility("hidden")))
@interface VUIMediaEntityGroup : NSObject
{
    NSObject<NSCopying> *_identifier;	// 8 = 0x8
    NSArray *_mediaEntities;	// 16 = 0x10
    NSArray *_sortIndexes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000356ab
@property(copy, nonatomic) NSArray *sortIndexes; // @synthesize sortIndexes=_sortIndexes;
@property(copy, nonatomic) NSArray *mediaEntities; // @synthesize mediaEntities=_mediaEntities;
@property(copy, nonatomic) NSObject<NSCopying> *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x0000000000035426
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003514a
- (unsigned long long)hash;	// IMP=0x0000000000035089
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000035007
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000034f5d
- (id)init;	// IMP=0x0000000000034eee

@end

