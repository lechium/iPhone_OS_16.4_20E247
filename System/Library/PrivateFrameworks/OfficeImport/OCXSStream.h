//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OCXSStream : NSObject
{
    NSMutableArray *mLevelStack;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000374ad2
- (_Bool)hasLevels;	// IMP=0x00000000001a29fc
- (_Bool)popLevel;	// IMP=0x00000000001aba6d
- (void)pushLevel:(int)arg1 name:(const char *)arg2;	// IMP=0x00000000001a2803
- (int)currentContextChildDepth;	// IMP=0x00000000001a2a8c
- (int)currentContextDepth;	// IMP=0x00000000001a2a19
- (id)init;	// IMP=0x00000000001a277a

@end

