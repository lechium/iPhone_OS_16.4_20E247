//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDCollection;

__attribute__((visibility("hidden")))
@interface EDLink : NSObject
{
    int mType;	// 8 = 0x8
    EDCollection *mExternalNames;	// 16 = 0x10
}

+ (id)linkWithType:(int)arg1;	// IMP=0x006000000013680e
- (void).cxx_destruct;	// IMP=0x00000000003a28d5
- (id)description;	// IMP=0x00000000003a2897
- (id)externalNames;	// IMP=0x0000000000218390
- (void)setType:(int)arg1;	// IMP=0x00000000003a288e
- (int)type;	// IMP=0x000000000014de7d
- (id)initWithType:(int)arg1;	// IMP=0x0000000000136843

@end

