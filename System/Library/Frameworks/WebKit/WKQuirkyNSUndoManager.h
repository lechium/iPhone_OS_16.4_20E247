//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUndoManager.h>

@class WKContentView;

__attribute__((visibility("hidden")))
@interface WKQuirkyNSUndoManager : NSUndoManager
{
    WKContentView *_contentView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000008e6a55
@property(readonly) __weak WKContentView *contentView; // @synthesize contentView=_contentView;
- (void)redo;	// IMP=0x00000000008e6a14
- (void)undo;	// IMP=0x00000000008e69e7
- (_Bool)canRedo;	// IMP=0x00000000008e69df
- (_Bool)canUndo;	// IMP=0x00000000008e69d7
- (id)initWithContentView:(id)arg1;	// IMP=0x00000000008e6982

@end
