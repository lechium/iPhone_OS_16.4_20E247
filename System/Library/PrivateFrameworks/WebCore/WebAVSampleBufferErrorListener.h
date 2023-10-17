//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebAVSampleBufferErrorListener : NSObject
{
    struct WeakPtr<WebCore::SourceBufferPrivateAVFObjC, WTF::DefaultWeakPtrImpl> _parent;	// 8 = 0x8
    struct Vector<WTF::RetainPtr<AVSampleBufferDisplayLayer>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> _layers;	// 16 = 0x10
    struct Vector<WTF::RetainPtr<AVSampleBufferAudioRenderer>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> _renderers;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x000000000025c820
- (void).cxx_destruct;	// IMP=0x000000000025c710
- (void)audioRendererWasAutomaticallyFlushed:(id)arg1;	// IMP=0x000000000025c4b0
- (void)layerFailedToDecode:(id)arg1;	// IMP=0x000000000025c290
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000025bdf0
- (void)stopObservingRenderer:(id)arg1;	// IMP=0x000000000025bcf0
- (void)beginObservingRenderer:(id)arg1;	// IMP=0x000000000025bb40
- (void)stopObservingLayer:(id)arg1;	// IMP=0x000000000025ba30
- (void)beginObservingLayer:(id)arg1;	// IMP=0x000000000025b860
- (void)invalidate;	// IMP=0x000000000025b600
- (void)dealloc;	// IMP=0x000000000025b5c0
- (id)initWithParent:(void *)arg1;	// IMP=0x000000000025b550

@end
