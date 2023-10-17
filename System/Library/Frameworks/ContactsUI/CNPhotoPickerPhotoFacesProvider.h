//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNVisualIdentity, NSString;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerPhotoFacesProvider : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    CNVisualIdentity *_visualIdentity;	// 16 = 0x10
}

+ (id)log;	// IMP=0x00100000001d1b32
- (void).cxx_destruct;	// IMP=0x00000000001d1683
@property(readonly, nonatomic) CNVisualIdentity *visualIdentity; // @synthesize visualIdentity=_visualIdentity;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (struct CGRect)cropRectForAsset:(id)arg1 face:(id)arg2;	// IMP=0x00000000001d137b
- (id)getItemsFromPhotoLibraryWithItemDelegate:(id)arg1;	// IMP=0x00000000001d0c8a
- (id)loadItemsForSize:(struct CGSize)arg1 scale:(double)arg2 RTL:(_Bool)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5 itemDelegate:(id)arg6;	// IMP=0x00000000001d0aa8
- (id)initWithVisualIdentity:(id)arg1;	// IMP=0x00000000001d09d6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
