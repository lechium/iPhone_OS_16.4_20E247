//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CAMFirstUnlockProtection : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x0040000000000f90
- (_Bool)checkFirstUnlock;	// IMP=0x0040000000000ff0
- (void)performAfterFirstUnlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000000fe5

@end
