//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GQDSStyle;

@interface GQDSParentResolutionEntry : NSObject
{
    char *mParentIdentifier;	// 8 = 0x8
    GQDSStyle *mStyle;	// 16 = 0x10
}

- (const char *)parentIdentifier;	// IMP=0x0000000000012ee7
- (id)style;	// IMP=0x0000000000012edd
- (void)dealloc;	// IMP=0x0000000000012e90
- (id)initWithStyle:(id)arg1 parentIdentifier:(const char *)arg2;	// IMP=0x0000000000012e2d

@end
