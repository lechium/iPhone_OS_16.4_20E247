//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutAuxillaryKey : NSObject
{
    _Bool _isSupplementary;	// 8 = 0x8
    NSString *_elementKind;	// 16 = 0x10
    long long _index;	// 24 = 0x18
    long long _auxillaryKind;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002b6bf0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002b6bba
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002b6a92
- (unsigned long long)hash;	// IMP=0x00000000002b6a6d
- (id)description;	// IMP=0x00000000002b6953

@end
