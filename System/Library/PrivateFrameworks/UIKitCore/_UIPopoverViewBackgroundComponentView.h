//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _UIPopoverViewBackgroundComponentView : UIView
{
    NSMutableArray *_replicants;	// 144 = 0x90
    NSString *_directionSelector;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00000000010918cf
@property(copy, nonatomic) NSString *directionSelector; // @synthesize directionSelector=_directionSelector;
- (void)updateReplicants;	// IMP=0x000000000109172e
- (id)replicate;	// IMP=0x0000000001091473
- (id)_newReplicant;	// IMP=0x00000000010913b2
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x0000000001091340

@end

