//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MKThreadContext : NSObject
{
    long long _CA_disableActionsCounter;	// 8 = 0x8
}

+ (id)currentContext;	// IMP=0x00600000000f55c0
- (void)_CA_setDisableActions:(_Bool)arg1;	// IMP=0x00000000000f5676

@end
