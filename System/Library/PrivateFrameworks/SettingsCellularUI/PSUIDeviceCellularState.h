//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PSUIDeviceCellularState : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x008000000002fbca
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000003000e
- (id)getLogger;	// IMP=0x000000000002ffee
- (_Bool)isConnectedOverCellular;	// IMP=0x000000000002fde5
- (void)dealloc;	// IMP=0x000000000002fd69
- (id)init;	// IMP=0x000000000002fcba
- (id)initPrivate;	// IMP=0x000000000002fc2f

@end
