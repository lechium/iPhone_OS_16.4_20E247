//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIStatusBarBluetoothItemView
{
    _Bool _connected;	// 144 = 0x90
    _Bool _shouldAnimateConnection;	// 145 = 0x91
}

- (id)accessibilityHUDRepresentation;	// IMP=0x0000000000f4047f
- (double)alphaForConnected:(_Bool)arg1;	// IMP=0x0000000000f40463
- (void)setVisible:(_Bool)arg1;	// IMP=0x0000000000f403f9
- (id)contentsImage;	// IMP=0x0000000000f403e0
- (void)performPendedActions;	// IMP=0x0000000000f40245
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;	// IMP=0x0000000000f401cc

@end
