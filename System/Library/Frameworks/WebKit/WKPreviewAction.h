//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPreviewAction.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKPreviewAction : UIPreviewAction
{
    NSString *_identifier;	// 8 = 0x8
}

+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2 style:(long long)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000002936e5
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)dealloc;	// IMP=0x000000000029376c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000293716

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

