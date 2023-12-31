//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class CNAvatarView, CNMutableContact, CNPhotoPickerViewController, NSArray, NSString, PRLikeness, UIButton, UIDropInteraction, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol CNContactPhotoViewDelegate, CNPresenterDelegate;

__attribute__((visibility("hidden")))
@interface CNContactPhotoView : UIControl
{
    _Bool _editing;	// 8 = 0x8
    _Bool _showEditingLabel;	// 9 = 0x9
    _Bool _modified;	// 10 = 0xa
    _Bool _shouldAllowTakePhotoAction;	// 11 = 0xb
    _Bool _prohibitsPersonaFetch;	// 12 = 0xc
    _Bool _isAnimatingBounce;	// 13 = 0xd
    _Bool _acceptsImageDrop;	// 14 = 0xe
    NSArray *_contacts;	// 16 = 0x10
    double _labelAlpha;	// 24 = 0x18
    CNAvatarView *_avatarView;	// 32 = 0x20
    id <CNPresenterDelegate> _presenterDelegate;	// 40 = 0x28
    id <CNContactPhotoViewDelegate> _delegate;	// 48 = 0x30
    CNMutableContact *_pendingEditContact;	// 56 = 0x38
    PRLikeness *_originalLikeness;	// 64 = 0x40
    PRLikeness *_currentLikeness;	// 72 = 0x48
    UIButton *_editPhotoButton;	// 80 = 0x50
    NSArray *_variableConstraints;	// 88 = 0x58
    UITapGestureRecognizer *_tapGestureRecognizer;	// 96 = 0x60
    UILongPressGestureRecognizer *_longPressGestureRecognizer;	// 104 = 0x68
    UIDropInteraction *_dropInteraction;	// 112 = 0x70
    CNPhotoPickerViewController *_photoPicker;	// 120 = 0x78
}

+ (id)supportedPasteboardTypes;	// IMP=0x00100000000a3528
+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x00100000000a3520
+ (id)descriptorForRequiredKeysWithThreeDTouchEnabled:(_Bool)arg1;	// IMP=0x00100000000a3401
+ (id)descriptorForRequiredKeys;	// IMP=0x00100000000a33ea
+ (struct CGSize)defaultSize;	// IMP=0x00100000000a33d9
- (void).cxx_destruct;	// IMP=0x00000000000a2dbb
@property(retain, nonatomic) CNPhotoPickerViewController *photoPicker; // @synthesize photoPicker=_photoPicker;
@property(nonatomic) _Bool acceptsImageDrop; // @synthesize acceptsImageDrop=_acceptsImageDrop;
@property(retain, nonatomic) UIDropInteraction *dropInteraction; // @synthesize dropInteraction=_dropInteraction;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) NSArray *variableConstraints; // @synthesize variableConstraints=_variableConstraints;
@property(nonatomic) _Bool isAnimatingBounce; // @synthesize isAnimatingBounce=_isAnimatingBounce;
@property(retain, nonatomic) UIButton *editPhotoButton; // @synthesize editPhotoButton=_editPhotoButton;
@property(nonatomic) _Bool prohibitsPersonaFetch; // @synthesize prohibitsPersonaFetch=_prohibitsPersonaFetch;
@property(retain, nonatomic) PRLikeness *currentLikeness; // @synthesize currentLikeness=_currentLikeness;
@property(retain, nonatomic) PRLikeness *originalLikeness; // @synthesize originalLikeness=_originalLikeness;
@property(retain, nonatomic) CNMutableContact *pendingEditContact; // @synthesize pendingEditContact=_pendingEditContact;
@property(nonatomic) __weak id <CNContactPhotoViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <CNPresenterDelegate> presenterDelegate; // @synthesize presenterDelegate=_presenterDelegate;
@property(retain, nonatomic) CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(readonly, nonatomic) _Bool shouldAllowTakePhotoAction; // @synthesize shouldAllowTakePhotoAction=_shouldAllowTakePhotoAction;
@property(nonatomic) _Bool modified; // @synthesize modified=_modified;
@property(nonatomic) _Bool showEditingLabel; // @synthesize showEditingLabel=_showEditingLabel;
@property(nonatomic) double labelAlpha; // @synthesize labelAlpha=_labelAlpha;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;	// IMP=0x00000000000a29e9
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;	// IMP=0x00000000000a293c
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;	// IMP=0x00000000000a282e
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;	// IMP=0x00000000000a26f7
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;	// IMP=0x00000000000a26ec
- (void)previewControllerDidDismiss:(id)arg1;	// IMP=0x00000000000a2674
- (struct CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id *)arg3;	// IMP=0x00000000000a2593
- (id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2;	// IMP=0x00000000000a2581
- (id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;	// IMP=0x00000000000a2317
- (void)didUpdateContentForAvatarView:(id)arg1;	// IMP=0x00000000000a22a1
- (void)willBeginPreviewInteractionForAvatarView:(id)arg1;	// IMP=0x00000000000a21e9
- (id)presentingViewControllerForAvatarView:(id)arg1;	// IMP=0x00000000000a218a
- (void)_bounceSmallPhoto;	// IMP=0x00000000000a1fd4
- (void)_presentFullScreenPhoto:(id)arg1;	// IMP=0x00000000000a1ec1
- (void)_zoomContactPhoto;	// IMP=0x00000000000a1c3f
- (id)previewPath;	// IMP=0x00000000000a1bf1
- (void)visualIdentityPicker:(id)arg1 presentationControllerWillDismiss:(id)arg2;	// IMP=0x00000000000a1b09
- (void)photoPicker:(id)arg1 didUpdatePhotoForContact:(id)arg2 withContactImage:(id)arg3;	// IMP=0x00000000000a17a3
- (void)photoPickerDidCancel:(id)arg1;	// IMP=0x00000000000a1720
@property(readonly) _Bool isPresentingModalViewController;
- (void)sender:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a1647
- (void)sender:(id)arg1 dismissViewController:(id)arg2;	// IMP=0x00000000000a1632
- (void)sender:(id)arg1 presentViewController:(id)arg2;	// IMP=0x00000000000a15a2
- (void)presentPhotoPickerWithImageData:(id)arg1;	// IMP=0x00000000000a136b
- (void)_presentPhotoPicker;	// IMP=0x00000000000a1357
- (void)presentPhotoPicker;	// IMP=0x00000000000a1345
- (_Bool)_isUsingSilhouette;	// IMP=0x00000000000a126b
- (_Bool)_isUsingCuratedPhoto;	// IMP=0x00000000000a11b2
- (void)updatePendingContactWithEditedPropertyItem:(id)arg1;	// IMP=0x00000000000a0f7e
- (void)updateEditPhotoButton;	// IMP=0x00000000000a0b7d
- (void)updateViewsAndNotifyDelegate:(_Bool)arg1;	// IMP=0x00000000000a0955
- (void)reloadData;	// IMP=0x00000000000a093e
- (void)updatePhoto;	// IMP=0x00000000000a08a4
- (void)resetPhoto;	// IMP=0x00000000000a0847
- (void)paste:(id)arg1;	// IMP=0x00000000000a0511
- (void)copy:(id)arg1;	// IMP=0x00000000000a03e5
- (void)menuWillHide:(id)arg1;	// IMP=0x00000000000a03ac
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000000000a02f8
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00000000000a0217
- (void)longPressGesture:(id)arg1;	// IMP=0x00000000000a0154
- (void)avatarTapped:(id)arg1;	// IMP=0x00000000000a00e8
- (void)disablePhotoTapGesture;	// IMP=0x00000000000a00a9
- (void)setHighlightedFrame:(_Bool)arg1;	// IMP=0x000000000009fe7c
- (void)setEditing:(_Bool)arg1 preservingChanges:(_Bool)arg2;	// IMP=0x000000000009fe49
- (_Bool)hasPhoto;	// IMP=0x000000000009fcb0
- (void)saveEdits;	// IMP=0x000000000009fc3f
- (void)saveChangesFromPendingContact:(id)arg1 toContact:(id)arg2;	// IMP=0x000000000009f64f
- (id)currentImageData;	// IMP=0x000000000009f5e5
- (void)updateFontSizes;	// IMP=0x000000000009f532
- (id)newPendingContactPreservingChangesFrom:(id)arg1;	// IMP=0x000000000009f4b0
@property(readonly, nonatomic) CNMutableContact *mutableContact;
- (id)contact;	// IMP=0x000000000009f342
- (_Bool)isMeContact;	// IMP=0x000000000009f33a
- (void)dealloc;	// IMP=0x000000000009f035
- (id)initWithFrame:(struct CGRect)arg1 shouldAllowTakePhotoAction:(_Bool)arg2 threeDTouchEnabled:(_Bool)arg3 contactStore:(id)arg4 allowsImageDrops:(_Bool)arg5 imageRenderer:(id)arg6;	// IMP=0x000000000009e6ee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

