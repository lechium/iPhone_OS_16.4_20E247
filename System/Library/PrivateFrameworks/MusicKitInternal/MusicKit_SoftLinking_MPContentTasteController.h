//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPContentTasteController;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_MPContentTasteController : NSObject
{
    MPContentTasteController *_underlyingContentTasteController;	// 8 = 0x8
}

+ (id)contentTasteControllerDidChangeNotificationName;	// IMP=0x004000000000ad67
+ (id)sharedContentTasteController;	// IMP=0x004000000000a8da
- (void).cxx_destruct;	// IMP=0x000000000000ae17
- (void)_handleContentTasteControllerDidChangeNotification:(id)arg1;	// IMP=0x000000000000ad74
- (long long)_underlyingTasteTypeFromContentTasteType:(long long)arg1;	// IMP=0x000000000000ad50
- (long long)_contentTasteTypeFromUnderlyingTasteType:(long long)arg1;	// IMP=0x000000000000ad39
- (void)setTasteType:(long long)arg1 forModelObject:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000ac91
- (long long)tasteTypeForModelObject:(id)arg1;	// IMP=0x000000000000ac2a
- (void)dealloc;	// IMP=0x000000000000ab90
- (id)_initWithUnderlyingContentTasteController:(id)arg1;	// IMP=0x000000000000aa13

@end

