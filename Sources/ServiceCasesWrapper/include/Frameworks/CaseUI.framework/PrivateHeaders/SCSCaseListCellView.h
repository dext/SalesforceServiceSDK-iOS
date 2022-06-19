//
//  SCSCaseListCellView.h
//  CaseUI
//
//  Created by Amisha Goyal on 3/8/16.
//  Copyright © 2016 Salesforce.com. All rights reserved.
//

#import <UIKit/UIKit.h>
/**
 Container view used to wrap the -[SCSCaseListCellView thumbnailImageView] view.  This allows appearance selectors to be applied to the appropriate subview.
 */
@interface SCSCaseListTableViewImageContentView : UIView @end

/**
 Container view used to wrap the -[SCSCaseListCellView titleTextLabel] view.  This allows appearance selectors to be applied to the appropriate label.
 */
@interface SCSCaseListTableViewTitleContentView : UIView @end

/**
 Container view used to wrap the -[SCSCaseListCellView dateTimeTextLabel] view.  This allows appearance selectors to be applied to the appropriate label.
 */
@interface SCSCaseListTableViewDateTimeContentView : UIView @end

/**
 Container view used to wrap the -[SCSCaseListCellView feedCommentTextLabel] view.  This allows appearance selectors to be applied to the appropriate label.
 */
@interface SCSCaseListTableViewFeedCommentContentView : UIView @end

/**
 Container view used to wrap the -[SCSCaseListCellView feedAvatarImageView] view.  This allows appearance selectors to be applied to the appropriate label.
 */
@interface SCSCaseListTableViewFeedAvatarImageContentView : UIView @end

/**
 Container view used to wrap the feed image and feed comment views.  This allows appearance selectors to be applied to the appropriate label.
 */
@interface SCSCaseListTableViewFeedContentView : UIView @end

/**
 Separator view for the cell.  This allows appearance selectors to be applied to the appropriate label.
 */
@interface SCSCaseListTableViewSeparatorView : UIView @end

/**
 Background view for the cell.  This allows appearance selectors to be applied to the appropriate view.
 */
@interface SCSCaseListTableViewCellBackgroundView : UIView @end


@interface SCSCaseListCellView : UITableViewCell

/**
 Thumbnail image view.
 */
@property (nonatomic, strong, readonly) UIImageView *thumbnailImageView;

/**
 Thumbnail image view for feed avatar image.
 */
@property (nonatomic, strong, readonly) UIImageView *feedAvatarImageView;

/**
 Title text label.
 */
@property (nonatomic, strong, readonly) UILabel *titleTextLabel;

/**
 Feed comment text label.
 */
@property (nonatomic, strong, readonly) UILabel *feedCommentTextLabel;

/**
 Date Time text label.
 */
@property (nonatomic, strong, readonly) UILabel *dateTimeTextLabel;

@end

@interface SCSCaseListCellView (UIAppearance)

/**
 Image size to constrain the image to, when an image is provided.
 */
@property (nonatomic, assign) IBInspectable CGSize thumbnailSize UI_APPEARANCE_SELECTOR;

/**
 Image size to constrain the feed agent image to, when an image is provided.
 If this is assigned without a feed image the feedCommentTextLabel will respect this image size and position itself accordingly with leading space equal to image width.

 */
@property (nonatomic, assign) IBInspectable CGSize feedImageSize UI_APPEARANCE_SELECTOR;

/**
 Padding between the feed agent image and the text labels.
 */
@property (nonatomic, assign) IBInspectable CGFloat feedImagePadding UI_APPEARANCE_SELECTOR;

/**
 Padding between the thumbnail image and the text labels.
 */
@property (nonatomic, assign) IBInspectable CGFloat thumbnailPadding UI_APPEARANCE_SELECTOR;

/**
 Edge insets from the outside edge of the cell to the contents.
 */
@property (nonatomic, assign) IBInspectable UIEdgeInsets outerInsets UI_APPEARANCE_SELECTOR;

/**
 Minimum height for the cell content.
 */
@property (nonatomic, assign) IBInspectable CGFloat minimumHeight UI_APPEARANCE_SELECTOR;

/**
 Separator line color..
 */
@property (nonatomic, assign) IBInspectable UIColor *separatorColor UI_APPEARANCE_SELECTOR;

@end
