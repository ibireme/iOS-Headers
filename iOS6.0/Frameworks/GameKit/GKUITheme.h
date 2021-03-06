/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GKAchievementProgressBrush, GKComposedImageBrush, GKGameListIconBrush, GKLeaderboardCategoryIconBrush, GKNetworkImageSource, GKRotatedGameDetailIconBrush, NSCache, UIColor, UIFont, UIImage, UISharedArtwork;

@interface GKUITheme : NSObject
{
    NSCache *_resourceCache;
    UISharedArtwork *_sharedArtwork;
    UIImage *_backgroundImageTiled;
}

+ (void)inGameFontsUnregister;
+ (void)inGameFontsRegister;
+ (id)sharedTheme;
+ (id)themeForGame:(id)arg1;
@property(readonly, nonatomic) UIImage *backgroundImageTiled; // @synthesize backgroundImageTiled=_backgroundImageTiled;
@property(retain, nonatomic) UISharedArtwork *sharedArtwork; // @synthesize sharedArtwork=_sharedArtwork;
@property(retain, nonatomic) NSCache *resourceCache; // @synthesize resourceCache=_resourceCache;
- (id)friendRecommendationBadgeImageForSource:(int)arg1;
- (id)multiplayerAddPlayer;
- (id)multiplayerPlaceholder;
- (id)multiplayerAutomatch;
- (id)multiplayerCancelBoxPressed;
- (id)multiplayerCancelBox;
- (id)matchmakerAppOutline;
- (id)welcomeScreenRightSquare;
- (id)welcomeScreenLeftSquare;
- (id)welcomeScreenBottomSquare;
- (id)welcomeScreenTopSquare;
- (id)welcomeScreenIcon;
- (id)gameDetailRotatedIconEffectsForUserInterfaceIdiom:(int)arg1;
- (id)gameDetailRotatedIconMaskForUserInterfaceIdiom:(int)arg1;
- (id)friendPickerSelectedCheckbox;
- (id)friendPickerUnselectedCheckbox;
- (id)defaultPlayerPhoto;
@property(readonly, nonatomic) GKNetworkImageSource *leaderboardCategoryIconSourceSmall;
@property(readonly, nonatomic) GKNetworkImageSource *leaderboardCategoryIconSource;
@property(readonly, nonatomic) GKNetworkImageSource *photoMultiplayerSource;
@property(readonly, nonatomic) GKNetworkImageSource *photoLeaderboardSource;
@property(readonly, nonatomic) GKNetworkImageSource *photoChallengeListPadSource;
@property(readonly, nonatomic) GKNetworkImageSource *photoListSource;
@property(readonly, nonatomic) GKNetworkImageSource *photoDetailLandscapeSource;
@property(readonly, nonatomic) GKNetworkImageSource *photoDetailSource;
@property(readonly, nonatomic) GKNetworkImageSource *challengeReceiverPhotoSource;
@property(readonly, nonatomic) GKNetworkImageSource *challengeIssuerPhotoSource;
@property(readonly, nonatomic) GKNetworkImageSource *achievementIconSourcePad;
@property(readonly, nonatomic) GKNetworkImageSource *achievementIconSource;
@property(readonly, nonatomic) GKNetworkImageSource *gameDetailHorizontallyFlippedIconSource;
@property(readonly, nonatomic) GKNetworkImageSource *gameDetailInGameWidescreenIconSource;
@property(readonly, nonatomic) GKNetworkImageSource *gameDetailInGameIconSource;
@property(readonly, nonatomic) GKNetworkImageSource *gameSharingIconSource;
@property(readonly, nonatomic) GKNetworkImageSource *gameDetailIconSource;
@property(readonly, nonatomic) GKNetworkImageSource *challengeListIconSource;
@property(readonly, nonatomic) GKNetworkImageSource *gameListIconSourceWithShine;
@property(readonly, nonatomic) GKNetworkImageSource *gameListIconSource;
@property(readonly, nonatomic) GKNetworkImageSource *macGameIconSource;
@property(readonly, nonatomic) GKLeaderboardCategoryIconBrush *leaderboardCategoryIconBrushSmall;
@property(readonly, nonatomic) GKLeaderboardCategoryIconBrush *leaderboardCategoryIconBrush;
@property(readonly, nonatomic) GKComposedImageBrush *achievementIconBrushPad;
@property(readonly, nonatomic) GKComposedImageBrush *achievementIconBrush;
@property(readonly, nonatomic) GKAchievementProgressBrush *achievementProgressBrushPadHighlighted;
@property(readonly, nonatomic) GKAchievementProgressBrush *achievementProgressBrushHighlighted;
@property(readonly, nonatomic) GKAchievementProgressBrush *achievementProgressBrushHeader;
@property(readonly, nonatomic) GKAchievementProgressBrush *achievementProgressBrushPad;
@property(readonly, nonatomic) GKAchievementProgressBrush *achievementProgressBrush;
@property(readonly, nonatomic) GKGameListIconBrush *gameListIconBrushWithShine;
@property(readonly, nonatomic) GKGameListIconBrush *gameListIconBrush;
@property(readonly, nonatomic) GKRotatedGameDetailIconBrush *gameDetailIconBrush;
@property(readonly, nonatomic) float modalTableViewMargin;
@property(readonly, nonatomic) struct CGSize formSheetSize;
- (struct UIEdgeInsets)tokenInsetsForRow:(unsigned int)arg1;
- (id)compareSplitterForHeader:(BOOL)arg1;
- (id)compareHeaderPiece:(int)arg1;
- (id)smallTokenBackgroundForType:(int)arg1;
- (id)tokenBackgroundForType:(int)arg1;
- (id)emptyChallengesImage;
- (id)emptyFriendRequestsImage;
- (id)emptyGamesListImage;
- (id)emptyFriendsListImage;
- (id)tableSectionCapCellBackgroundFill;
- (id)leaderboardCellBackgroundGreenFill;
- (id)leaderboardCellBackgroundRedFill;
- (id)leaderboardCellBackgroundBlackFill;
- (id)showMoreCellBackgroundFill;
- (id)verticalLineImage;
- (id)tabbarIconChallengesActive:(BOOL)arg1;
- (id)tabbarIconRequestsActive:(BOOL)arg1;
- (id)tabbarIconMeActive:(BOOL)arg1;
- (id)tabbarIconGamesActive:(BOOL)arg1;
- (id)tabbarIconFriendsActive:(BOOL)arg1;
- (id)tabbarActiveTabImage;
- (id)tabbarCornerImage;
- (id)tabbarShadowImage;
- (id)tabbarLandscapeImage;
- (id)tabbarPortraitImage;
- (id)segmentedControlDividerForControlState:(unsigned int)arg1 barMetrics:(int)arg2;
- (id)segmentedControlBackgroundForControlState:(unsigned int)arg1 barMetrics:(int)arg2;
- (id)navbarFocusButtonForControlState:(unsigned int)arg1 barMetrics:(int)arg2;
- (id)navbarBackButtonForControlState:(unsigned int)arg1 barMetrics:(int)arg2;
- (id)navbarButtonForControlState:(unsigned int)arg1 barMetrics:(int)arg2;
- (id)formSheetNavbarBackground;
- (id)formSheetFrameShadow;
- (id)formSheetFrameLeft;
- (id)formSheetFrameRight;
- (id)formSheetFrameBottom;
- (id)achievementsTokenFriendPlayer;
- (id)achievementsTokenLocalPlayer;
- (id)achievementsCompareCheckMark;
- (id)achievementsCompareCellShortSeparator;
- (id)achievementsCompareCellSeparator;
- (id)achievementsNotStartedIconHighlightiPad;
- (id)achievementsNotStartedIconiPad;
- (id)achievementsDefaultIcon;
- (id)achievementsNotStartedIconHeader;
- (id)achievementsNotStartedIconHighlight;
- (id)achievementsNotStartedIcon;
- (id)navbarSplitCornerImage;
- (id)navbarCornerImage;
- (id)navbarShadowImage;
- (id)navbarLandscapeImage;
- (id)navbarPortraitImage;
- (id)searchbarBezelImage;
- (id)toolbarBackgroundImage;
- (id)eventIconImage;
- (id)gameDetailSectionTitleBackgroundImagePressed;
- (id)gameDetailSectionTitleBackgroundImage;
- (id)playerHeaderOutlineImage;
- (id)welcomeSubviewOutlineImage;
- (id)welcomeSubviewMask;
- (id)localizedWelcomeBannerTextImageForLocation:(int)arg1;
- (id)welcomeBannerImageForLocation:(int)arg1;
- (id)eventBackgroundImage;
- (id)headerWoodenFrameRightMask;
- (id)headerWoodenFrameLeftMask;
- (id)headerWoodenFrameCenterMask;
- (id)headerWoodenFrameNarrowMask;
- (id)headerWoodenFrameRight;
- (id)headerWoodenFrameLeft;
- (id)headerWoodenFrameCenter;
- (id)headerWoodenFrameNarrow;
- (id)headerWoodenBottomBar;
- (id)headerBackgroundForTableSectionCapOfSize:(struct CGSize)arg1;
- (id)headerBackgroundWithGlowForSize:(struct CGSize)arg1;
- (id)headerBackgroundWithGlowForWidth:(float)arg1;
- (id)headerBackgroundWideWithGlow;
- (id)headerBackgroundNarrowWithGlow;
- (id)listIconShineImage;
- (id)listIconShadowImage;
- (id)listIconMaskImage;
- (id)bluePuckForCompareHeader;
- (id)redPuckForCompareHeader;
- (id)tableCellDisclosureButtonForControlState:(unsigned int)arg1;
- (id)tableCellDisclosureIndicatorImage;
- (id)horizontalSeparatorImage;
- (id)addContactImageSelected:(BOOL)arg1;
- (id)atomBackgroundImageSelected:(BOOL)arg1;
- (id)smallAlternate2ButtonImageSelected:(BOOL)arg1;
- (id)smallAlternateButtonImageSelected:(BOOL)arg1;
- (id)smallButtonImageSelected:(BOOL)arg1;
- (id)buttonImageSelected:(BOOL)arg1;
- (id)segmentedControlRibbonLargeDivider;
- (id)segmentedControlRibbonLargeBackgroundSelected;
- (id)segmentedControlRibbonLargeWoodOverlay;
- (id)segmentedControlRibbonLargeWoodMask;
- (id)segmentedControlRibbonLargeWoodBackground;
- (id)segmentedControlRibbonLargeFeltMask;
- (id)segmentedControlRibbonLargeFeltBackground;
- (id)segmentedControlRibbonDivider;
- (id)segmentedControlRibbonBackgroundSelected;
- (id)segmentedControlRibbonBackground;
- (id)segmentedControlHeaderBackgroundSelectedPressed;
- (id)segmentedControlHeaderBackgroundSelected;
- (id)segmentedControlHeaderBackground;
@property(readonly, nonatomic) UIImage *uninviteNowButtonImage;
@property(readonly, nonatomic) UIImage *listMessageBubbleImageSelected;
@property(readonly, nonatomic) UIImage *listMessageBubbleImage;
@property(readonly, nonatomic) UIImage *messageBubbleTailImage;
@property(readonly, nonatomic) UIImage *messageBubbleImage;
@property(readonly, nonatomic) UIImage *removeButtonPressedImage;
@property(readonly, nonatomic) UIImage *removeButtonImage;
@property(readonly, nonatomic) UIImage *inviteButtonPressedImage;
@property(readonly, nonatomic) UIImage *inviteButtonImage;
@property(readonly, nonatomic) UIImage *interactiveRatingStarsBackground;
@property(readonly, nonatomic) UIImage *interactiveRatingStarsForeground;
@property(readonly, nonatomic) UIImage *ratingStarsLargeForegroundOnHeaderImage;
@property(readonly, nonatomic) UIImage *ratingStarsLargeBackgroundOnHeaderImage;
@property(readonly, nonatomic) UIImage *ratingStarsForegroundOnHeaderImage;
@property(readonly, nonatomic) UIImage *ratingStarsBackgroundOnHeaderImage;
@property(readonly, nonatomic) UIImage *ratingStarsForegroundImage;
@property(readonly, nonatomic) UIImage *ratingStarsBackgroundImage;
@property(readonly, nonatomic) UIImage *achievementsLabelBackgroundImage;
@property(readonly, nonatomic) UIImage *gamesLabelBackgroundImage;
@property(readonly, nonatomic) UIImage *friendsLabelBackgroundImage;
@property(readonly, nonatomic) UIImage *achievementsLabelLargeBackgroundImage;
@property(readonly, nonatomic) UIImage *gamesLabelLargeBackgroundImage;
@property(readonly, nonatomic) UIImage *friendsLabelLargeBackgroundImage;
- (id)sectionHeaderDisclosureTriangle;
- (id)sectionHeaderOrnamentRight;
- (id)sectionHeaderOrnamentLeft;
- (id)tableCellBorderShadowColor;
- (id)tableCellBorderFill;
- (id)tableCellBorderColor;
- (struct UIEdgeInsets)tableCellBackgroundBorderInsetsForSectionLocation:(int)arg1;
- (id)headerTextFieldBackgroundImageWithSectionLocation:(int)arg1;
- (id)textFieldBackgroundImageWithSectionLocation:(int)arg1;
- (id)textFieldBackgroundImageWithHeight:(float)arg1;
- (id)textFieldSelectionDragDotImage;
- (id)textFieldClearButtonImage;
@property(readonly, nonatomic) UIImage *selectedBackgroundImage;
- (id)selectedBackgroundImageForOrientation:(int)arg1;
- (id)backgroundImageForOrientation:(int)arg1;
- (id)backgroundImageForOrientation:(int)arg1 selected:(BOOL)arg2;
@property(readonly, nonatomic) UIImage *selectedDarkBackgroundImageTiled;
- (id)backgroundImageForScreenWidth:(float)arg1 selected:(BOOL)arg2 useGradient:(BOOL)arg3;
- (id)brushForPhoneBackgroundTile:(id)arg1;
@property(readonly, nonatomic) UIImage *darkBackgroundImageTiled;
@property(readonly, nonatomic) UIImage *backgroundImageRedTiled;
@property(readonly, nonatomic) UIImage *backgroundImage;
@property(readonly, nonatomic) UIFont *headerSegmentedNumericFont;
@property(readonly, nonatomic) UIFont *headerSegmentedControlFont;
@property(readonly, nonatomic) UIFont *ribbonSegmentedControlFont;
@property(readonly, nonatomic) UIFont *inviteButtonFont;
@property(readonly, nonatomic) UIFont *typedTextFontForComposeMessageField;
@property(readonly, nonatomic) UIFont *typedTextFont;
@property(readonly, nonatomic) UIFont *boldInfoFont;
@property(readonly, nonatomic) UIFont *infoFont;
@property(readonly, nonatomic) UIFont *boldMediumButtonTitleFont;
@property(readonly, nonatomic) UIFont *boldSmallButtonTitleFont;
@property(readonly, nonatomic) UIFont *boldSmallTitleFont;
@property(readonly, nonatomic) UIFont *smallTitleFont;
@property(readonly, nonatomic) UIFont *boldTitleFont;
@property(readonly, nonatomic) UIFont *titleFont;
@property(readonly, nonatomic) UIFont *headlineFont;
- (id)gameCompareDetailBoldFontOfSize:(float)arg1;
- (id)gameCompareDetailFontOfSize:(float)arg1;
- (id)gameCompareBoldFontOfSize:(float)arg1;
- (id)gameCompareFontOfSize:(float)arg1;
- (id)leaderboardPercentileFontOfSize:(float)arg1;
- (id)leaderboardScoreFontOfSize:(float)arg1;
- (id)leaderboardDetailFontOfSize:(float)arg1;
- (id)leaderboardLabelFontOfSize:(float)arg1;
- (id)leaderboardRankFontOfSize:(float)arg1;
- (id)matchmakerButtonFontOfSize:(float)arg1;
- (id)boldHeaderLabelFontOfSize:(float)arg1;
- (id)headerLabelFontOfSize:(float)arg1;
- (id)multiplayerTitleFontOfSize:(float)arg1;
- (id)headerOnHeaderStatusFontOfSize:(float)arg1;
- (id)headerStatusFontOfSize:(float)arg1;
- (id)boldHeaderBodyFontOfSize:(float)arg1;
- (id)headerBodyFontOfSize:(float)arg1;
- (id)playerStatsFontOfSize:(float)arg1;
- (id)gameHeaderFontOfSize:(float)arg1;
- (id)playerHeaderFontOfSize:(float)arg1;
- (id)welcomeBannerFontOfSize:(float)arg1;
@property(readonly, nonatomic) UIColor *headerSegmentedControlSelectedTextColor;
@property(readonly, nonatomic) UIColor *ribbonSegmentedControlSelectedTextColor;
@property(readonly, nonatomic) UIColor *uninviteNowButtonTitleHighlightColor;
@property(readonly, nonatomic) UIColor *uninviteNowButtonTitleColor;
@property(readonly, nonatomic) UIColor *leaderboardScoreColor;
@property(readonly, nonatomic) UIColor *leaderboardDetailColor;
@property(readonly, nonatomic) UIColor *leaderboardLabelColor;
@property(readonly, nonatomic) UIColor *leaderboardRankColor;
@property(readonly, nonatomic) UIColor *playerHeaderEmbossColor;
@property(readonly, nonatomic) UIColor *playerHeaderShadowColor;
@property(readonly, nonatomic) UIColor *playerHeaderColor;
@property(readonly, nonatomic) UIColor *inactiveSegmentedControlLabelColor;
@property(readonly, nonatomic) UIColor *activeSegmentedControlLabelColor;
@property(readonly, nonatomic) UIColor *tableCellSeparatorColor;
@property(readonly, nonatomic) UIColor *darkerShadowColor;
@property(readonly, nonatomic) UIColor *shadowColor;
@property(readonly, nonatomic) UIColor *highlightedEmbossColor;
@property(readonly, nonatomic) UIColor *headerEmbossColor;
@property(readonly, nonatomic) UIColor *solidBackgroundColor;
@property(readonly, nonatomic) UIColor *darkerEmbossColor;
@property(readonly, nonatomic) UIColor *embossColor;
@property(readonly, nonatomic) UIColor *headerPlaceholderTextColor;
@property(readonly, nonatomic) UIColor *placeholderTextColor;
@property(readonly, nonatomic) UIColor *typedTextColor;
@property(readonly, nonatomic) UIColor *focusButtonTextColor;
@property(readonly, nonatomic) UIColor *highlightedInfoTextColor;
@property(readonly, nonatomic) UIColor *darkerInfoTextColor;
@property(readonly, nonatomic) UIColor *infoTextColor;
@property(readonly, nonatomic) UIColor *tableSectionHeaderColor;
@property(readonly, nonatomic) UIColor *secondaryButtonTitleColor;
@property(readonly, nonatomic) UIColor *textFieldInsertionPointColor;
@property(readonly, nonatomic) UIColor *textFieldSelectionColor;
@property(readonly, nonatomic) UIColor *welcomeBannerTextColor;
@property(readonly, nonatomic) UIColor *lowContrastSecondaryLabelColor;
@property(readonly, nonatomic) UIColor *secondaryLabelColorWithoutTexture;
@property(readonly, nonatomic) UIColor *secondaryLabelColor;
@property(readonly, nonatomic) UIColor *highlightedButtonTitleColor;
@property(readonly, nonatomic) UIColor *buttonTitleEmbossColor;
@property(readonly, nonatomic) UIColor *headerButtonTitleColorForLetterpress;
@property(readonly, nonatomic) UIColor *buttonTitleColorForLetterpress;
@property(readonly, nonatomic) UIColor *headerButtonTitleColor;
@property(readonly, nonatomic) UIColor *buttonTitleColor;
@property(readonly, nonatomic) UIColor *labelColor;
- (id)imageNamed:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)clearResourceCache;
- (void)applyTheme;
- (void)applyStartupTheme;

@end

