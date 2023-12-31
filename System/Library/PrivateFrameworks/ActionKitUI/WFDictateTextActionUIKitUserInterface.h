//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUICore/WFEmbeddableActionUserInterface.h>

@class NSString, WFDictateTextActionView;

__attribute__((visibility("hidden")))
@interface WFDictateTextActionUIKitUserInterface : WFEmbeddableActionUserInterface
{
    WFDictateTextActionView *_actionView;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002d171
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) WFDictateTextActionView *actionView; // @synthesize actionView=_actionView;
- (void)dictateTextActionViewDidTapStopButton:(id)arg1;	// IMP=0x000000000002d111
- (void)finishWithError:(id)arg1;	// IMP=0x000000000002d074
- (void)cancelPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002cff4
- (void)actionDidReceiveTranscription:(id)arg1;	// IMP=0x000000000002cf57
- (void)actionDidBeginListening;	// IMP=0x000000000002cf51
- (void)dismissWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002ceb4
- (void)showWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002ce17
- (_Bool)prefersModalPresentation;	// IMP=0x000000000002ce0f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *userInterfaceType;

@end

