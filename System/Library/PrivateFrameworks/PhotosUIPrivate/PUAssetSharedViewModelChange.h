//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUViewModelChange.h"

__attribute__((visibility("hidden")))
@interface PUAssetSharedViewModelChange : PUViewModelChange
{
    _Bool _loadingStatusChanged;	// 8 = 0x8
    _Bool _saveProgressChanged;	// 9 = 0x9
    _Bool _saveStateChanged;	// 10 = 0xa
    _Bool _needsDeferredProcessingChanged;	// 11 = 0xb
    _Bool _deferredProcessingNeededChanged;	// 12 = 0xc
    _Bool _flippingFullSizeRenderStateChanged;	// 13 = 0xd
}

@property(nonatomic) _Bool flippingFullSizeRenderStateChanged; // @synthesize flippingFullSizeRenderStateChanged=_flippingFullSizeRenderStateChanged;
@property(nonatomic) _Bool deferredProcessingNeededChanged; // @synthesize deferredProcessingNeededChanged=_deferredProcessingNeededChanged;
@property(nonatomic) _Bool needsDeferredProcessingChanged; // @synthesize needsDeferredProcessingChanged=_needsDeferredProcessingChanged;
@property(nonatomic) _Bool saveStateChanged; // @synthesize saveStateChanged=_saveStateChanged;
@property(nonatomic) _Bool saveProgressChanged; // @synthesize saveProgressChanged=_saveProgressChanged;
@property(nonatomic) _Bool loadingStatusChanged; // @synthesize loadingStatusChanged=_loadingStatusChanged;
- (_Bool)hasChanges;	// IMP=0x00000000000d6fad

@end

